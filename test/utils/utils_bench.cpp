#include <algorithm>
#include <string>
#include "benchmark/benchmark.h"
#include "utils/utils.h"

std::vector<std::string> strs;
std::vector<int> ints;

static void DoSetup(const benchmark::State &state) {
  for (int i = 0; i < 1000; i++) {
    strs.emplace_back(std::to_string(i));
  }
}

static void DoSetupInt(const benchmark::State &state) {
  constexpr int len = 10000;
  ints.reserve(len);
  int begin = 0;
  std::generate_n(ints.begin(), len, [&]() { return begin++; });
}

static void DoTeardown(const benchmark::State &state) {
  strs.clear();
  ints.clear();
}

static void BM_Join(benchmark::State &state) {
  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    str_join(strs);
  }
}

static void BM_Join_Int(benchmark::State &state) {
  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    str_join_int(ints);
  }
}

static void BM_JoinStream(benchmark::State &state) {
  for (auto _ : state) {
    str_join_stream(strs);
  }
}

static void BM_Join_IntStream(benchmark::State &state) {
  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    str_join_int_stream(ints);
  }
}

static void BM_Raw_For_Loop(benchmark::State &state) {
  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    raw_for_loop(ints);
  }
}

static void BM_For_each_Loop(benchmark::State &state) {
  // Perform setup here
  for (auto _ : state) {
    // This code gets timed
    for_each_loop(ints);
  }
}

BENCHMARK(BM_Join)->Setup(DoSetup)->Teardown(DoTeardown);

BENCHMARK(BM_JoinStream)->Setup(DoSetup)->Teardown(DoTeardown);

BENCHMARK(BM_Join_Int)->Setup(DoSetupInt)->Teardown(DoTeardown);

BENCHMARK(BM_Join_IntStream)->Setup(DoSetupInt)->Teardown(DoTeardown);

BENCHMARK(BM_Raw_For_Loop)->Setup(DoSetupInt)->Teardown(DoTeardown);

BENCHMARK(BM_For_each_Loop)->Setup(DoSetupInt)->Teardown(DoTeardown);

// Run the benchmark
BENCHMARK_MAIN();