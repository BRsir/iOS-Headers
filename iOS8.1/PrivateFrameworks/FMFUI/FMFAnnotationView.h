//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MKAnnotationView.h"

@class CALayer, CAShapeLayer;

__attribute__((visibility("hidden")))
@interface FMFAnnotationView : MKAnnotationView
{
    BOOL _isRotating;
    BOOL _wantsRotation;
    int _annotationSize;
    CAShapeLayer *_shapeLayer;
    CAShapeLayer *_circleLayer;
    CAShapeLayer *_markerOval;
    CAShapeLayer *_markerCenter;
    CAShapeLayer *_tailLayer;
    CALayer *_centerImageLayer;
    float _futureRotationAmount;
}

+ (id)circlePath;
@property(nonatomic) float futureRotationAmount; // @synthesize futureRotationAmount=_futureRotationAmount;
@property(nonatomic) BOOL wantsRotation; // @synthesize wantsRotation=_wantsRotation;
@property(nonatomic) BOOL isRotating; // @synthesize isRotating=_isRotating;
@property(retain, nonatomic) CALayer *centerImageLayer; // @synthesize centerImageLayer=_centerImageLayer;
@property(retain, nonatomic) CAShapeLayer *tailLayer; // @synthesize tailLayer=_tailLayer;
@property(retain, nonatomic) CAShapeLayer *markerCenter; // @synthesize markerCenter=_markerCenter;
@property(retain, nonatomic) CAShapeLayer *markerOval; // @synthesize markerOval=_markerOval;
@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(nonatomic) int annotationSize; // @synthesize annotationSize=_annotationSize;
- (void).cxx_destruct;
- (id)markerCenterPathSmall;
- (id)markerOvalPathSmall;
- (id)markerCenterPath;
- (id)markerOvalPath;
- (id)shutterCircle;
- (id)smallCircle;
- (id)largeCircle;
- (id)smallTail;
- (id)largeTail;
- (id)largeBezierPath;
- (id)smallBezierPath;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (struct CGRect)centerImageFrameForSize:(int)arg1;
- (id)shutterLineWidthForSize:(int)arg1;
- (id)lineWidthForSize:(int)arg1;
- (id)shadowOpacityForSize:(int)arg1;
- (void)sizeAnnotationView;
- (void)updateAnnotationShutter;
- (void)setAnnotationSize:(float)arg1 animated:(BOOL)arg2;
- (struct CGSize)intrinsicContentSize;
- (void)prepareForReuse;
- (void)setPersonImage:(id)arg1;
- (id)clipImageToCircle:(id)arg1;
- (id)fallbackPersonImage;
- (float)animationDuration;
- (struct CGRect)hitRectForSize;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 tintColor:(id)arg3;

@end
