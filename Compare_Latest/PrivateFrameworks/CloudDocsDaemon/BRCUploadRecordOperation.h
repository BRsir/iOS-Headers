//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCMultiplexableOperation.h>

@class CKRecord;

__attribute__((visibility("hidden")))
@interface BRCUploadRecordOperation : BRCMultiplexableOperation
{
    CKRecord *_record;
    CDUnknownBlockType _uploadCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType uploadCompletionBlock; // @synthesize uploadCompletionBlock=_uploadCompletionBlock;
@property(retain, nonatomic) CKRecord *record; // @synthesize record=_record;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithMultiplexer:(id)arg1;
- (id)name;

@end
