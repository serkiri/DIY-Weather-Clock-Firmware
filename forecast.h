#pragma once
#include <Arduino.h>

// 3-day forecast entry (today + next 2 days from wttr.in j1).
struct ForecastDayEntry {
  String temp;       // signed max temp for display
  String cond;
  String dayName;
  String dateStr;
  int    code;       // noon weatherCode for icon
  bool   valid;
};

static const int FORECAST_DAYS = 3;
