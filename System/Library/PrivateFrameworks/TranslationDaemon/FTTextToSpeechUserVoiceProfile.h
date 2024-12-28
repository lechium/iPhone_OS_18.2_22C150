//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface FTTextToSpeechUserVoiceProfile : NSObject
{
    NSMutableDictionary *_storage;	// 8 = 0x8
    NSData *_data;	// 16 = 0x10
    const struct TextToSpeechUserVoiceProfile *_root;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000118244
- (id)flatbuffData;	// IMP=0x00000000001180b3
- (Offset_0c4f1d74)addObjectToBuffer:(void *)arg1;	// IMP=0x0000000000117f8d
@property(readonly, nonatomic) float duration_std;
@property(readonly, nonatomic) float duration_mean;
@property(readonly, nonatomic) float energy_std;
@property(readonly, nonatomic) float energy_mean;
@property(readonly, nonatomic) float pitch_std;
@property(readonly, nonatomic) float pitch_mean;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000117e6e
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechUserVoiceProfile *)arg2 verify:(_Bool)arg3;	// IMP=0x0000000000117cc3
- (id)initWithFlatbuffData:(id)arg1 root:(const struct TextToSpeechUserVoiceProfile *)arg2;	// IMP=0x0000000000117cae
- (id)initAndVerifyWithFlatbuffData:(id)arg1;	// IMP=0x0000000000117c94
- (id)initWithFlatbuffData:(id)arg1;	// IMP=0x0000000000117c7d

@end
