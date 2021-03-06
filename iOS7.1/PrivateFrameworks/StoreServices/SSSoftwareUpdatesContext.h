//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"
#import "SSXPCCoding.h"

@class NSArray, NSString;

@interface SSSoftwareUpdatesContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying>
{
    NSString *_clientIdentifierHeader;
    BOOL _forced;
    NSArray *_softwareTypes;
}

@property(readonly, nonatomic, getter=isForced) BOOL forced; // @synthesize forced=_forced;
@property(readonly, nonatomic) NSString *clientIdentifierHeader; // @synthesize clientIdentifierHeader=_clientIdentifierHeader;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
@property(readonly, nonatomic) NSArray *softwareTypes; // @synthesize softwareTypes=_softwareTypes;
- (void)dealloc;

@end

