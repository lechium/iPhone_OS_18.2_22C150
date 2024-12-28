//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriController, CSAudioRecordContext, NSArray, NSString;

@interface CSAttSiriMagusLoggingNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    unsigned long long _type;	// 16 = 0x10
    NSArray *_requiredNodes;	// 24 = 0x18
    CSAttSiriController *_attSiriController;	// 32 = 0x20
    NSString *_mhId;	// 40 = 0x28
    CSAudioRecordContext *_audioRecordContext;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x002000000005f037
@property(retain, nonatomic) CSAudioRecordContext *audioRecordContext; // @synthesize audioRecordContext=_audioRecordContext;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)removeReceiver:(id)arg1;	// IMP=0x001000000005ef9d
- (void)addReceiver:(id)arg1;	// IMP=0x001000000005ef97
- (void)stop;	// IMP=0x001000000005ef91
- (void)pause;	// IMP=0x001000000005ef8b
- (void)start;	// IMP=0x001000000005ef85
- (id)initWithAttSiriController:(id)arg1;	// IMP=0x001000000005ef77

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
// Preceding property had unknown attributes: ?
// Original attribute string: T@"NSString",?,R,C

@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) CSAsset *prefetchedAsset;
@property(readonly) Class superclass;

@end
