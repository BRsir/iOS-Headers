//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSKCommand.h>

@class NSArray, NSDictionary, NSMutableDictionary, TSSStylesheet;

__attribute__((visibility("hidden")))
@interface TSSReapUnusedStylesCommand : TSKCommand
{
    TSSStylesheet *mStylesheet;
    NSArray *mStyles;
    NSMutableDictionary *mIdentifiedStyles;
    NSArray *_styles;
}

@property(readonly, nonatomic) NSDictionary *identifiedStyles; // @synthesize identifiedStyles=mIdentifiedStyles;
@property(readonly, nonatomic) TSSStylesheet *stylesheet; // @synthesize stylesheet=mStylesheet;
@property(readonly, nonatomic) NSArray *styles; // @synthesize styles=_styles;
- (BOOL)process;
- (void)saveToArchiver:(id)arg1;
- (id)initFromUnarchiver:(id)arg1;
- (void)dealloc;
- (id)initWithDocumentRoot:(id)arg1 stylesheet:(id)arg2;

@end
