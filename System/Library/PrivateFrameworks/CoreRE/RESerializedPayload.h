//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, NSString;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface RESerializedPayload
{
    NSString *_typeName;	// 8 = 0x8
    NSObject<OS_dispatch_data> *_serializedData;	// 16 = 0x10
    NSObject<OS_dispatch_data> *_blobData;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00600000002a7118
- (void).cxx_destruct;	// IMP=0x00000000002a75df
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *blobData; // @synthesize blobData=_blobData;
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *serializedData; // @synthesize serializedData=_serializedData;
@property(readonly, nonatomic) NSString *typeName; // @synthesize typeName=_typeName;
- (id)redactedDescription;	// IMP=0x00000000002a757c
- (id)description;	// IMP=0x00000000002a7541
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000002a74ab
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002a7261
- (id)initWithTypeName:(id)arg1 serializedBytes:(const void *)arg2 size:(unsigned long long)arg3 blobBytes:(const void *)arg4 size:(unsigned long long)arg5;	// IMP=0x00000000002a7120

@end

