//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CIBurstImageSet, NSDate, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString, PLManagedAsset;

@interface CAMAvalancheSession : NSObject
{
    int _type;
    id <CAMAvalancheSessionDelegate> _delegate;
    int _state;
    NSString *_uuid;
    unsigned int _numberOfPhotos;
    PLManagedAsset *_possibleAvalancheAsset;
    NSDate *__expirationDate;
    NSObject<OS_dispatch_source> *__expirationTimer;
    NSObject<OS_dispatch_queue> *__expirationQueue;
    CIBurstImageSet *__burstImageSet;
}

@property(readonly, nonatomic) CIBurstImageSet *_burstImageSet; // @synthesize _burstImageSet=__burstImageSet;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_expirationQueue; // @synthesize _expirationQueue=__expirationQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_source> *_expirationTimer; // @synthesize _expirationTimer=__expirationTimer;
@property(retain, nonatomic, setter=_setExpirationDate:) NSDate *_expirationDate; // @synthesize _expirationDate=__expirationDate;
- (void)_setPossibleAvalancheAsset:(id)arg1;
@property(retain, nonatomic) PLManagedAsset *possibleAvalancheAsset; // @synthesize possibleAvalancheAsset=_possibleAvalancheAsset;
@property(readonly, nonatomic) unsigned int numberOfPhotos; // @synthesize numberOfPhotos=_numberOfPhotos;
- (void)_setUUID:(id)arg1;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) id <CAMAvalancheSessionDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) int type; // @synthesize type=_type;
- (void)_didTransitionToState:(int)arg1;
- (void)_setState:(int)arg1;
- (void)_transitionToState:(int)arg1;
- (BOOL)_ensureValidStateChange:(int)arg1;
- (id)stackAssetIdentifier;
- (id)bestAssetIndentifiers;
- (id)allAssetIdentifiers;
- (void)_expirationTimerFired;
- (void)_setupExpirationTimer;
- (void)_teardownExpirationTimer;
- (void)finalizeWithAnalysis:(BOOL)arg1;
- (BOOL)extend;
- (void)dealloc;
- (id)initWithType:(int)arg1;
- (id)init;

@end
