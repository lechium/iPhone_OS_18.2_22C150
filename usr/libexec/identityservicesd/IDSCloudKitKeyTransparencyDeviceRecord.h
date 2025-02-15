//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface IDSCloudKitKeyTransparencyDeviceRecord : NSObject
{
    NSData *_deviceData;	// 8 = 0x8
    NSData *_deviceMetadata;	// 16 = 0x10
    NSString *_recordID;	// 24 = 0x18
}

+ (id)recordWithDeviceData:(id)arg1 deviceMetadata:(id)arg2 recordID:(id)arg3;	// IMP=0x00400000001356c9
- (void).cxx_destruct;	// IMP=0x0020000000135d14
@property(readonly, nonatomic) NSString *recordID; // @synthesize recordID=_recordID;
@property(readonly, nonatomic) NSData *deviceMetadata; // @synthesize deviceMetadata=_deviceMetadata;
@property(readonly, nonatomic) NSData *deviceData; // @synthesize deviceData=_deviceData;
- (unsigned long long)hash;	// IMP=0x0010000000135c40
- (_Bool)isEqualToCloudKitKeyTransparencyDeviceRecord:(id)arg1;	// IMP=0x001000000013597e
- (_Bool)isEqual:(id)arg1;	// IMP=0x001000000013591b
- (id)description;	// IMP=0x0010000000135841
- (id)initWithDeviceData:(id)arg1 deviceMetadata:(id)arg2 recordID:(id)arg3;	// IMP=0x0010000000135755

@end

