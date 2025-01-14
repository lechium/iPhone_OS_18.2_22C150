//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCSessionPresentationInfo : NSObject
{
    unsigned int _displayID;	// 8 = 0x8
    struct CGSize _displaySize;	// 16 = 0x10
    struct CGRect _appWindowRect;	// 32 = 0x20
    unsigned int _uiLayout;	// 64 = 0x40
    unsigned char _uiState;	// 68 = 0x44
    _Bool _hasPendingChanges;	// 69 = 0x45
    struct tagVCSpatialAudioMetadataGlobalInfo _metadataGlobalInfo;	// 72 = 0x48
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000048bb61
+ (unsigned int)metadataSateWithUIState:(unsigned char)arg1;	// IMP=0x001000000048b5dc
+ (unsigned char)avcUIStateWithUIState:(unsigned char)arg1;	// IMP=0x001000000048b5ce
+ (unsigned char)uiStateWithAVCUIState:(unsigned char)arg1;	// IMP=0x001000000048b5c0
+ (unsigned int)avcLayoutWithLayout:(unsigned int)arg1;	// IMP=0x001000000048b5b8
+ (unsigned int)layoutWithAVCLayout:(unsigned int)arg1;	// IMP=0x001000000048b5b0
@property(readonly, nonatomic) unsigned char uiState; // @synthesize uiState=_uiState;
@property(readonly, nonatomic) _Bool hasPendingChanges; // @synthesize hasPendingChanges=_hasPendingChanges;
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000048bc7a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000048bb69
@property(readonly, nonatomic) const struct tagVCSpatialAudioMetadataGlobalInfo *metadataGlobalInfo;
@property(nonatomic) struct tagAVCSessionPresentationInfo avcSessionPresentationInfo;
- (void)unserialize:(id)arg1;	// IMP=0x000000000048b6ad
- (id)serialize;	// IMP=0x000000000048b5ea
- (void)setDisplayID:(unsigned int)arg1;	// IMP=0x000000000048b534
- (id)description;	// IMP=0x000000000048b4ef
- (id)init;	// IMP=0x000000000048b473

@end

