//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContactBufferDecoder, CNContactUnificationOptions, NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CNiOSABContactBuffersDecoder : NSObject
{
    _Bool _unifyResults;	// 8 = 0x8
    _Bool _mutableResults;	// 9 = 0x9
    CNContactBufferDecoder *_decoder;	// 16 = 0x10
    long long _decodeBatchSize;	// 24 = 0x18
    CNContactUnificationOptions *_unificationOptions;	// 32 = 0x20
    NSMutableArray *_contactsWaitingForUnification;	// 40 = 0x28
    NSMutableDictionary *_matchInfosWaitingForUnification;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000000133d8
@property(readonly, nonatomic) NSMutableDictionary *matchInfosWaitingForUnification; // @synthesize matchInfosWaitingForUnification=_matchInfosWaitingForUnification;
@property(readonly, nonatomic) NSMutableArray *contactsWaitingForUnification; // @synthesize contactsWaitingForUnification=_contactsWaitingForUnification;
@property(readonly, nonatomic) _Bool mutableResults; // @synthesize mutableResults=_mutableResults;
@property(readonly, copy, nonatomic) CNContactUnificationOptions *unificationOptions; // @synthesize unificationOptions=_unificationOptions;
@property(readonly, nonatomic) _Bool unifyResults; // @synthesize unifyResults=_unifyResults;
@property(readonly, nonatomic) long long decodeBatchSize; // @synthesize decodeBatchSize=_decodeBatchSize;
@property(readonly, nonatomic) CNContactBufferDecoder *decoder; // @synthesize decoder=_decoder;
- (id)unifyContacts:(id)arg1 moreComing:(_Bool)arg2;	// IMP=0x0000000000012af5
- (id)contactMatchInfosFromABMatchInfos:(id)arg1 contacts:(id)arg2;	// IMP=0x00000000000123f4
- (id)_contactMatchInfosFromABMatchInfos:(id)arg1 contacts:(id)arg2;	// IMP=0x00000000000120d4
- (void)_addContactMatchInfoFromABMatchInfos:(id)arg1 forContact:(id)arg2 toDictionary:(id)arg3;	// IMP=0x0000000000011faf
- (_Bool)decodeContactsFromData:(id)arg1 moreComing:(_Bool)arg2 replyHandler:(CDUnknownBlockType)arg3 error:(id *)arg4;	// IMP=0x0000000000011cde
- (id)initWithFetchRequest:(id)arg1;	// IMP=0x0000000000011bee
- (id)initWithDecoder:(id)arg1 unifyResults:(_Bool)arg2 unificationOptions:(id)arg3 mutableResults:(_Bool)arg4 decodeBatchLimit:(long long)arg5;	// IMP=0x0000000000011acc
- (id)init;	// IMP=0x0000000000011a8f

@end
