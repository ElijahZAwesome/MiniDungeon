#pragma once

const char *UpdateFloorText(void);

void ToggleVibration(void);
const char *UpdateVibrationText(void);

bool AdventureWindowIsVisible(void);

void ShowAdventureWindow(void);
void ShowNewFloorWindow(void);

void ForceEvent(void);
void ExecuteEvent(int i);
int ComputeRandomEvent(bool fastMode);
void UpdateAdventure(void);
int GetTickCount(void);
void SetTickCount(int ticks);

int *GetEventChances(void);
int GetEventCount(void);
int GetBaseChanceOfEvent(void);
