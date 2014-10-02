//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UITextMagnifier.h>

__attribute__((visibility("hidden")))
@interface UITextMagnifierCaret : UITextMagnifier
{
    struct CGPoint _offset;
    float _yOffset;
}

+ (id)sharedCaretMagnifier;
@property(nonatomic) float yOffset; // @synthesize yOffset=_yOffset;
@property(nonatomic) struct CGPoint offset; // @synthesize offset=_offset;
- (void)stopMagnifying:(BOOL)arg1;
- (void)beginMagnifyingTarget:(id)arg1 text:(id)arg2 magnificationPoint:(struct CGPoint)arg3 offset:(struct CGPoint)arg4 animated:(BOOL)arg5;
- (void)updateFrameAndOffset;
- (void)remove;
- (void)zoomDownAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)zoomDownAnimation;
- (void)zoomUpAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)zoomUpAnimation;
- (void)setAutoscrollDirections:(int)arg1;
- (BOOL)terminalPointPlacedCarefully;
- (void)setMagnificationPoint:(struct CGPoint)arg1;
- (void)setAnimationPoint:(struct CGPoint)arg1;
- (struct CGPoint)animationPoint;
- (void)dealloc;
- (id)initWithFrame;

@end
