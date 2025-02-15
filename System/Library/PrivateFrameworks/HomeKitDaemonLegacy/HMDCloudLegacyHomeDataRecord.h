//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData;

__attribute__((visibility("hidden")))
@interface HMDCloudLegacyHomeDataRecord
{
}

+ (id)legacyModelWithHomeDataV0:(id)arg1 homeDataV2:(id)arg2;	// IMP=0x00600000009b57b9
- (unsigned long long)objectEncoding;	// IMP=0x00000000009b57ae
- (void)clearData;	// IMP=0x00000000009b571b
@property(retain, nonatomic) NSData *dataVersion2;
- (void)setData:(id)arg1;	// IMP=0x00000000009b54dd
- (id)data;	// IMP=0x00000000009b5486
- (id)recordType;	// IMP=0x00000000009b5467
- (_Bool)encodeObjectChange:(id)arg1;	// IMP=0x00000000009b4c9d
- (id)extractObjectChange;	// IMP=0x00000000009b40c6

@end

