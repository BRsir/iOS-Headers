/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <QuickLook/QLPrintPageRenderer.h>

@class NSMutableArray, UIWebPaginationInfo;

@interface QLLayoutedPrintPageRenderer : QLPrintPageRenderer
{
    NSMutableArray *_nodes;
    UIWebPaginationInfo *_paginationInfo;
}

- (void)dealloc;
- (id)_htmlPageXPath;
- (id)_currentNodes;
- (int)numberOfPages;
- (void)prepareForDrawingPages:(struct _NSRange)arg1;
- (void)drawContentForPageAtIndex:(int)arg1 inRect:(struct CGRect)arg2;

@end
