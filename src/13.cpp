
int main() {
  std::vector<int> numbers;
  for (int i = 0; i < 10; i++) {
    numbers.push_back(i);
  }
  for (auto number : numbers) {
    std::cout << number << " ";
  }
  return 0;
}