//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class APPCOutstreamVideoInfo, MISSING_TYPE, NSNumber, NSString;

@interface APPCBannerRepresentation
{
    MISSING_TYPE *adTag;	// 0 = 0x0
    MISSING_TYPE *adamIdentifier;	// 1163157343 = 0x45545f5f
    MISSING_TYPE *appAdTemplateType;	// 0 = 0x0
    MISSING_TYPE *outstreamVideoInfo;	// 720912 = 0xb0010
}

- (void).cxx_destruct;	// IMP=0x0000000000025460
- (id)initWithIdentifier:(id)arg1 adType:(long long)arg2 desiredPosition:(long long)arg3 privacyMarkerPosition:(long long)arg4 adSize:(struct CGSize)arg5 tapAction:(id)arg6 adTag:(id)arg7 outstreamVideoInfo:(id)arg8 adamIdentifier:(id)arg9 tapActionTemplateType:(long long)arg10 adPolicyData:(id)arg11;	// IMP=0x0000000000024bb0
@property(nonatomic, readonly) APPCOutstreamVideoInfo *outstreamVideoInfo; // @synthesize outstreamVideoInfo;
@property(nonatomic, readonly) long long appAdTemplateType; // @synthesize appAdTemplateType;
@property(nonatomic, readonly) NSNumber *adamIdentifier; // @synthesize adamIdentifier;
@property(nonatomic, readonly) NSString *adTag;

@end

