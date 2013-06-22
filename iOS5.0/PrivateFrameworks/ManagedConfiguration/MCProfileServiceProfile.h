/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ManagedConfiguration/MCProfile.h>

@class NSArray, NSData, NSString;

@interface MCProfileServiceProfile : MCProfile
{
    NSString *_URLString;
    NSArray *_deviceAttributes;
    id _challenge;
    NSData *_enrollmentIdentityPersistentID;
    BOOL _confirmInstallation;
    NSArray *_bogusPayloads;
}

- (id)_badDataTypeErrorWithFieldName:(id)arg1;
- (id)_unsupportedValueErrorWithFieldName:(id)arg1 value:(id)arg2;
- (id)initWithDictionary:(id)arg1 originalData:(id)arg2 wasEncrypted:(BOOL)arg3 allowEmptyPayload:(BOOL)arg4 outError:(id *)arg5;
- (void)dealloc;
- (id)localizedPayloadSummaryByType;
- (id)payloads;
- (id)stubDictionary;
- (id)description;
@property(readonly) BOOL confirmInstallation; // @synthesize confirmInstallation=_confirmInstallation;
@property(retain) NSData *enrollmentIdentityPersistentID; // @synthesize enrollmentIdentityPersistentID=_enrollmentIdentityPersistentID;
@property(readonly) id challenge; // @synthesize challenge=_challenge;
@property(readonly) NSArray *deviceAttributes; // @synthesize deviceAttributes=_deviceAttributes;
@property(retain) NSString *URLString; // @synthesize URLString=_URLString;

@end
