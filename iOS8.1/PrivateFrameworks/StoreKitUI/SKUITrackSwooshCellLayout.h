//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreKitUI/SKUIItemCellLayout.h>

@class NSString, SKUIColorScheme, UILabel, UIView;

@interface SKUITrackSwooshCellLayout : SKUIItemCellLayout
{
    NSString *_artistName;
    UIView *_bottomBorderView;
    NSString *_collectionName;
    SKUIColorScheme *_colorScheme;
    int _lockupSize;
    int _layoutIdiom;
    UIView *_selectionBackgroundView;
    NSString *_subtitleFormatString;
    UILabel *_subtitleLabel;
    UILabel *_titleLabel;
    unsigned int _visibleFields;
}

@property(nonatomic) unsigned int visibleFields; // @synthesize visibleFields=_visibleFields;
@property(copy, nonatomic) NSString *subtitleFormatString; // @synthesize subtitleFormatString=_subtitleFormatString;
@property(nonatomic) int lockupSize; // @synthesize lockupSize=_lockupSize;
@property(nonatomic) int layoutIdiom; // @synthesize layoutIdiom=_layoutIdiom;
@property(copy, nonatomic) NSString *collectionName; // @synthesize collectionName=_collectionName;
@property(copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
- (void).cxx_destruct;
- (void)_reloadSubviewBackgroundColors;
- (void)_delayedReloadSubviewBackgroundColors;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setColoringWithColorScheme:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)layoutForItemOfferChange;
@property(copy, nonatomic) NSString *title;

@end

