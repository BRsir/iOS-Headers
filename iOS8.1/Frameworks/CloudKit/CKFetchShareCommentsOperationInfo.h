//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudKit/CKOperationInfo.h>

@class CKCommentCursor, CKCommentQuery;

__attribute__((visibility("hidden")))
@interface CKFetchShareCommentsOperationInfo : CKOperationInfo
{
    CKCommentQuery *_query;
    CKCommentCursor *_cursor;
    unsigned int _resultsLimit;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned int resultsLimit; // @synthesize resultsLimit=_resultsLimit;
@property(retain, nonatomic) CKCommentCursor *cursor; // @synthesize cursor=_cursor;
@property(retain, nonatomic) CKCommentQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
