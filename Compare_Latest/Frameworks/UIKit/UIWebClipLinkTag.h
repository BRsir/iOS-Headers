//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL;

@interface UIWebClipLinkTag : NSObject
{
    BOOL _mediaMatchesPortraitOrientation;
    BOOL _mediaMatchesLandscapeOrientation;
    NSString *_href;
    NSString *_rel;
    NSString *_sizes;
}

@property(nonatomic) BOOL mediaMatchesLandscapeOrientation; // @synthesize mediaMatchesLandscapeOrientation=_mediaMatchesLandscapeOrientation;
@property(nonatomic) BOOL mediaMatchesPortraitOrientation; // @synthesize mediaMatchesPortraitOrientation=_mediaMatchesPortraitOrientation;
@property(copy, nonatomic) NSString *sizes; // @synthesize sizes=_sizes;
@property(copy, nonatomic) NSString *rel; // @synthesize rel=_rel;
@property(copy, nonatomic) NSString *href; // @synthesize href=_href;
- (void)dealloc;
@property(readonly, nonatomic) NSURL *hrefURL;

@end

