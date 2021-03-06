//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FrontBoard/FBFileLogger.h>

@interface FBWorkspaceLogger : FBFileLogger
{
    BOOL _useOverrideDestinations;
    unsigned int _overrideDestinations;
}

- (void)willBeginLoggingToPath:(id)arg1;
- (void)_configureOverrideDestinationForString:(id)arg1;
- (void)reloadFromDefaults;
- (unsigned int)logDestinations;
- (id)logPrefixForCategory:(id)arg1 destination:(unsigned int)arg2;
- (int)maxLogSize;
- (int)maxLogCount;
- (void)_setEnabled:(BOOL)arg1;
- (id)name;
- (BOOL)isEnabled;
- (id)init;

@end

