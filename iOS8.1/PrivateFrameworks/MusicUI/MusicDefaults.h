//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPUApplicationDefaults.h"

@class NSArray;

@interface MusicDefaults : MPUApplicationDefaults
{
}

+ (id)sharedDefaults;
- (void)migrateTabBarOrderingIfNeeded;
- (void)ensureInvertedDefaultPlaybackSpeedHackIsInPlace;
- (void)beginObservingDefaultsChanges;
@property(nonatomic, getter=isGeniusUserEnabled) BOOL geniusUserEnabled;
@property(copy, nonatomic) NSArray *tabBarOrdering;
@property(nonatomic) unsigned int shuffleType;
@property(nonatomic) unsigned int repeatType;
@property(nonatomic) unsigned int playbackSpeed;
@property(readonly, nonatomic, getter=isSoundCheckEnabled) BOOL soundCheckEnabled;
@property(readonly, nonatomic, getter=isSortByArtistEnabled) BOOL sortByArtistEnabled;
@property(readonly, nonatomic, getter=isShowCloudMediaEnabled) BOOL showCloudMediaEnabled;
@property(readonly, nonatomic, getter=isShakeToShuffleEnabled) BOOL shakeToShuffleEnabled;
@property(readonly, nonatomic, getter=isPinningEnabled) BOOL pinningEnabled;
@property(readonly, nonatomic, getter=isGroupByAlbumArtistEnabled) BOOL groupByAlbumArtistEnabled;
@property(readonly, nonatomic, getter=isActivityContinuationEnabled) BOOL activityContinuationEnabled;
@property(readonly, nonatomic) int eqPreset;
@property(readonly, nonatomic, getter=areLyricsAndPodcastInfoEnabled) BOOL lyricsAndPodcastInfoEnabled;
@property(nonatomic) BOOL lastEffectiveRadioExplicitTracksEnabled;

@end

