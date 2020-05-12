import 'package:new_instagrammundefined/index.dart';

class YouAwesomeRepository {
  final YouAwesomeProvider _youAwesomeProvider = YouAwesomeProvider();

  YouAwesomeRepository();

  void test(bool isError) {
    _youAwesomeProvider.test(isError);
  }
}