//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MFMessageDataConsumerFactory.h"

@class MFMessage, MFMessageLibrary;

@interface _MFDALibraryConsumerFactory : NSObject <MFMessageDataConsumerFactory>
{
    MFMessageLibrary *_library;
    MFMessage *_message;
}

@property(retain, nonatomic) MFMessage *message; // @synthesize message=_message;
@property(retain, nonatomic) MFMessageLibrary *library; // @synthesize library=_library;
- (void)dealloc;
- (id)dataConsumerForPart:(id)arg1;

@end

