/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class SBKSyncTransaction;

@interface SBKSyncRequestData : NSObject
{
    SBKSyncTransaction *_transaction;
}

+ (id)serializablePropertyListPayloadWithTransaction:(id)arg1;
@property(readonly) SBKSyncTransaction *transaction; // @synthesize transaction=_transaction;
- (void).cxx_destruct;
- (id)_serializableDeleteItemPayloadDictionaryForKey:(id)arg1;
- (id)_serializableUpdateItemPayloadDictionaryForKey:(id)arg1;
- (BOOL)_needsConflictDetection;
- (id)_serializableConflictDetectionOrdinalForKey:(id)arg1;
- (id)_serializableConflictDetectionValue;
- (id)serializableRequestBodyPropertyList;
- (id)initWithTransaction:(id)arg1;

@end
