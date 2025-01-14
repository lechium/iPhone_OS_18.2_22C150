//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface IXPromisedStreamingZipTransferSeed
{
    unsigned long long _archiveBytesConsumed;	// 8 = 0x8
    unsigned long long _archiveSizeBytes;	// 16 = 0x10
    NSDictionary *_szOptions;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00200000000118a3
- (void).cxx_destruct;	// IMP=0x00200000000119c2
@property(copy, nonatomic) NSDictionary *szOptions; // @synthesize szOptions=_szOptions;
@property(nonatomic) unsigned long long archiveSizeBytes; // @synthesize archiveSizeBytes=_archiveSizeBytes;
@property(nonatomic) unsigned long long archiveBytesConsumed; // @synthesize archiveBytesConsumed=_archiveBytesConsumed;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000118ab
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000011767
- (id)initWithCoder:(id)arg1;	// IMP=0x0010000000011628

@end

