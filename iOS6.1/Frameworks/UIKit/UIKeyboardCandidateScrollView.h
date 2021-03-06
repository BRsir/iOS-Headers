/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <UIKit/UIScrollView.h>

@class NSArray, UIKeyboardCandidateScrollViewController, UITableViewIndex, UIView;

@interface UIKeyboardCandidateScrollView : UIScrollView
{
    float _indexMaximumHeight;
    UIKeyboardCandidateScrollViewController *_parentViewController;
    UIView *_headerView;
    float _previousGroupBarStartingY;
    UITableViewIndex *_index;
    NSArray *_indexTitles;
}

@property(retain, nonatomic) NSArray *indexTitles; // @synthesize indexTitles=_indexTitles;
@property(readonly, nonatomic) UITableViewIndex *index; // @synthesize index=_index;
@property(nonatomic) float previousGroupBarStartingY; // @synthesize previousGroupBarStartingY=_previousGroupBarStartingY;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) UIKeyboardCandidateScrollViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
- (void)keyboardWillShowNotification:(id)arg1;
- (void)keyboardDidHideNotification:(id)arg1;
- (void)addSubview:(id)arg1;
- (void)setContentOffset:(struct CGPoint)arg1;
- (BOOL)shouldShowIndex;
- (void)showIndex:(BOOL)arg1;
- (void)delayUpdateIndex;
- (void)updateIndex;
- (void)updateIndex:(BOOL)arg1;
- (float)groupBarStartingY;
- (void)drawRect:(struct CGRect)arg1;
- (BOOL)isCellVisible:(id)arg1;
- (void)scrollToBottomWithAnimation:(BOOL)arg1;
- (void)scrollToOffsetFromTop:(float)arg1 withAnimation:(BOOL)arg2;
- (void)scrollToTopWithAnimation:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

