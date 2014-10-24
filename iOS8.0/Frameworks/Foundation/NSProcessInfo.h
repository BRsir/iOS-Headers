//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface NSProcessInfo : NSObject
{
    NSDictionary *environment;
    NSArray *arguments;
    NSString *hostName;
    NSString *name;
    int automaticTerminationOptOutCounter;
}

+ (id)processInfo;
- (void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)performActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)_reactivateActivity:(id)arg1;
- (void)endActivity:(id)arg1;
- (id)beginActivityWithOptions:(unsigned long long)arg1 reason:(id)arg2;
- (void)endSystemBehaviorSuspension:(id)arg1;
- (id)beginSuspensionOfSystemBehaviors:(unsigned long long)arg1 reason:(id)arg2;
- (void)_enableAutomaticTerminationOnly:(id)arg1;
- (void)_disableAutomaticTerminationOnly:(id)arg1;
@property BOOL automaticTerminationSupportEnabled;
- (void)enableAutomaticTermination:(id)arg1;
- (void)disableAutomaticTermination:(id)arg1;
- (int)_suddenTerminationDisablingCount;
- (void)_exitWhenSuddenTerminationEnabledWithStatus:(int)arg1;
- (void)_exitIfSuddenTerminationEnabledWithStatus:(int)arg1;
- (void)enableSuddenTermination;
- (void)disableSuddenTermination;
@property(readonly) double systemUptime;
- (BOOL)isTranslated;
@property(readonly) unsigned long long physicalMemory;
@property(readonly) unsigned int activeProcessorCount;
@property(readonly) unsigned int processorCount;
- (BOOL)isOperatingSystemAtLeastVersion:(CDStruct_77932685)arg1;
@property(readonly) CDStruct_77932685 operatingSystemVersion;
@property(readonly, copy) NSString *operatingSystemVersionString;
- (id)operatingSystemName;
- (unsigned int)operatingSystem;
- (id)userHomeDirectory;
- (id)userFullName;
- (id)userName;
@property(readonly, copy) NSString *globallyUniqueString;
@property(readonly) int processIdentifier;
@property(copy) NSString *processName;
@property(readonly, copy) NSString *hostName;
- (void)setArguments:(id)arg1;
@property(readonly, copy) NSArray *arguments;
@property(readonly, copy) NSDictionary *environment;
- (void)dealloc;

@end
