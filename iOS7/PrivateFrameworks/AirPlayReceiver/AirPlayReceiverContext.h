/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableSet, NSObject<OS_dispatch_source>;

// Not exported
@interface AirPlayReceiverContext : NSObject
{
    struct AirPlayReceiverSessionPrivate *_session;
    unsigned char _receiverUIStarted;
    unsigned int _receiverUISessionID;
    unsigned char _audioStarted;
    struct OpaqueAUGraph *_graph;
    unsigned char _useLegacyOutput;
    int _mainConverterNode;
    struct OpaqueAudioComponentInstance *_mainConverterUnit;
    double _mainNextSampleTime;
    unsigned char _useAltOutput;
    int _altConverterNode;
    struct OpaqueAudioComponentInstance *_altConverterUnit;
    double _altNextSampleTime;
    int _mixerNode;
    struct OpaqueAudioComponentInstance *_mixerUnit;
    unsigned char _useVarispeed;
    int _varispeedNode;
    struct OpaqueAudioComponentInstance *_varispeedUnit;
    unsigned char _useInput;
    struct OpaqueAudioComponentInstance *_inputUnit;
    char *_inputBuffer;
    unsigned long long _inputMaxLen;
    unsigned char _inputEnabled;
    unsigned char _inputStarted;
    double _inputNextSampleTime;
    int _outputNode;
    struct OpaqueAudioComponentInstance *_outputUnit;
    unsigned char _audioLoopback;
    NSObject<OS_dispatch_source> *_ducker;
    struct __CFString *_displayUUID;
    struct IONotificationPort *_hidNotifier;
    unsigned int _hidIterator;
    NSMutableSet *_hidDevices;
    unsigned int _powerAssertion;
}

- (void)_handleMediaServicesWereReset:(id)arg1;
- (void)_handleAudioInterruption:(id)arg1;

@end

