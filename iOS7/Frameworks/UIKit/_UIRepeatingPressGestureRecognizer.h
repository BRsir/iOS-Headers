/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIGestureRecognizer.h>

@interface _UIRepeatingPressGestureRecognizer : UIGestureRecognizer
{
    _Bool _timerOn;
    long long _delayIndex;
    unsigned long long _numberOfTouchesRequired;
    long long _buttonType;
}

+ (double)delayForRepeatNumber:(long long)arg1;
@property(nonatomic, setter=_setButtonType:) long long _buttonType; // @synthesize _buttonType;
@property(nonatomic) unsigned long long numberOfTouchesRequired; // @synthesize numberOfTouchesRequired=_numberOfTouchesRequired;
- (void)_finishNextStep:(id)arg1;
- (void)_nextStep:(id)arg1;
- (void)_scheduleNextTimer;
- (void)_clearTapTimer;
- (void)_cancelPress;
- (void)_endPress;
- (void)_beginPress;
- (void)_physicalButtonsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsEnded:(id)arg1 withEvent:(id)arg2;
- (void)_physicalButtonsBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_resetGestureRecognizer;
- (void)setView:(id)arg1;
- (void)dealloc;

@end

