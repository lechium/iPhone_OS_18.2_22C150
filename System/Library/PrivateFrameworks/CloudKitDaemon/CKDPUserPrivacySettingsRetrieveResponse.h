//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class CKDPUserPrivacySettings, NSMutableArray;

@interface CKDPUserPrivacySettingsRetrieveResponse : PBCodable
{
    NSMutableArray *_applicationBundles;	// 8 = 0x8
    CKDPUserPrivacySettings *_userPrivacySettings;	// 16 = 0x10
}

+ (Class)applicationBundleType;	// IMP=0x0010000000234839
- (void).cxx_destruct;	// IMP=0x0000000000235285
@property(retain, nonatomic) NSMutableArray *applicationBundles; // @synthesize applicationBundles=_applicationBundles;
@property(retain, nonatomic) CKDPUserPrivacySettings *userPrivacySettings; // @synthesize userPrivacySettings=_userPrivacySettings;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000000002350b1
- (unsigned long long)hash;	// IMP=0x0000000000235064
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000234fac
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000234dd4
- (void)copyTo:(id)arg1;	// IMP=0x0000000000234cec
- (void)writeTo:(id)arg1;	// IMP=0x0000000000234b9a
- (_Bool)readFrom:(id)arg1;	// IMP=0x0000000000234b8d
- (id)dictionaryRepresentation;	// IMP=0x00000000002348f9
- (id)description;	// IMP=0x000000000023484a
- (id)applicationBundleAtIndex:(unsigned long long)arg1;	// IMP=0x000000000023481c
- (unsigned long long)applicationBundlesCount;	// IMP=0x00000000002347ff
- (void)addApplicationBundle:(id)arg1;	// IMP=0x0000000000234795
- (void)clearApplicationBundles;	// IMP=0x0000000000234778
@property(readonly, nonatomic) _Bool hasUserPrivacySettings;

@end
