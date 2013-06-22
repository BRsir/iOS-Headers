/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PLAlbumContainer-Protocol.h"
#import "PLIndexMapperDataSource-Protocol.h"
#import "PLIndexMappingCache-Protocol.h"

@class NSMutableIndexSet, NSMutableOrderedSet, NSPredicate, NSString, PLIndexMapper, PLManagedAlbumList, PLPhotoLibrary;

@interface PLFilteredAlbumList : NSObject <PLAlbumContainer, PLIndexMapperDataSource, PLIndexMappingCache>
{
    PLIndexMapper *_indexMapper;
    NSMutableIndexSet *_filteredIndexes;
    NSMutableOrderedSet *_weak_albums;
    PLManagedAlbumList *backingAlbumList;
    int filter;
    NSPredicate *predicate;
}

+ (id)filteredAlbumList:(id)arg1 filter:(int)arg2;
@property(retain, nonatomic) NSPredicate *predicate; // @synthesize predicate;
@property(nonatomic) int filter; // @synthesize filter;
@property(retain, nonatomic) PLManagedAlbumList *backingAlbumList; // @synthesize backingAlbumList;
- (void)replaceFilteredAlbumsAtIndexes:(id)arg1 withFilteredValues:(id)arg2;
- (void)replaceObjectInFilteredAlbumsAtIndex:(unsigned int)arg1 withObject:(id)arg2;
- (void)removeFilteredAlbumsAtIndexes:(id)arg1;
- (void)insertFilteredAlbums:(id)arg1 atIndexes:(id)arg2;
- (void)removeObjectFromFilteredAlbumsAtIndex:(unsigned int)arg1;
- (void)insertObject:(id)arg1 inFilteredAlbumsAtIndex:(unsigned int)arg2;
- (void)getFilteredAlbums:(id *)arg1 range:(struct _NSRange)arg2;
- (id)filteredAlbumsAtIndexes:(id)arg1;
- (id)objectInFilteredAlbumsAtIndex:(unsigned int)arg1;
- (unsigned int)indexInFilteredAlbumsOfObject:(id)arg1;
- (unsigned int)countOfFilteredAlbums;
@property(retain, nonatomic) NSMutableOrderedSet *_albums;
- (Class)derivedChangeNotificationClass;
- (BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2;
- (BOOL)shouldIncludeObjectAtIndex:(unsigned int)arg1;
- (id)cachedIndexMapState;
- (id)filteredIndexes;
@property(readonly, nonatomic) PLIndexMapper *indexMapper;
@property(readonly, nonatomic) unsigned int unreadAlbumsCount;
- (void)_invalidateFilteredIndexes;
@property(readonly, nonatomic) NSString *_prettyDescription;
@property(readonly, nonatomic) NSString *_typeDescription;
- (id)managedObjectContext;
- (id)identifier;
- (void)_backingContextDidChange:(id)arg1;
- (id)description;
@property(readonly, nonatomic) PLPhotoLibrary *photoLibrary;
- (BOOL)hasAtLeastOneAlbum;
@property(readonly, nonatomic) NSMutableOrderedSet *albums;
- (void)updateAlbumsOrderIfNeeded;
- (BOOL)needsReordering;
- (void)setNeedsReordering;
@property(readonly, nonatomic) id albumsSortingComparator;
- (BOOL)albumHasFixedOrder:(struct NSObject *)arg1;
@property(readonly, nonatomic) BOOL canEditAlbums;
@property(readonly, nonatomic) int albumListType;
- (void)dealloc;
- (id)initWithBackingAlbumList:(id)arg1 filter:(int)arg2;

@end
