//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import "TSKArchivedSelection.h"

@class TSKSelection, TSKSelection<TSDCanvasSelection>;

__attribute__((visibility("hidden")))
@interface TSDArchivedCanvasSelection : TSPObject <TSKArchivedSelection>
{
    TSKSelection<TSDCanvasSelection> *mSelection;
}

@property(retain, nonatomic) TSKSelection *selection; // @synthesize selection=mSelection;
- (void)dealloc;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1;

@end
