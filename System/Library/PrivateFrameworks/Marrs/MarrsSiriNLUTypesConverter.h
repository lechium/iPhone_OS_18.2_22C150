//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MarrsSiriNLUTypesConverter : NSObject
{
}

+ (id)fromPluginResponseObj:(const void *)arg1;	// IMP=0x0080000000024039
+ (id)fromPluginResponsePtr:(const void *)arg1;	// IMP=0x0080000000023df7
+ (struct QRRequest)toPluginRequestObj:(id)arg1;	// IMP=0x00800000000237bd
+ (unique_ptr_d07b5ea7)toPluginRequestPtr:(id)arg1;	// IMP=0x008000000002303d
+ (int)toPluginRequester:(int)arg1;	// IMP=0x008000000002302c
+ (id)fromPluginHypothesis:(struct QRHypothesis)arg1;	// IMP=0x0080000000022eb7
+ (id)fromPluginInteraction:(struct QRInteraction)arg1;	// IMP=0x008000000002291c
+ (struct QRInteraction)toPluginInteraction:(id)arg1;	// IMP=0x0080000000021eab
+ (id)fromPluginUtterance:(struct QRUtterance)arg1;	// IMP=0x008000000002196f
+ (struct QRUtterance)toPluginUtterance:(id)arg1;	// IMP=0x0080000000021055
+ (id)internalTokenfromPluginToken:(struct QRToken)arg1;	// IMP=0x0080000000020e05
+ (id)fromPluginToken:(struct QRToken)arg1;	// IMP=0x0080000000020c30
+ (struct QRToken)internalTokentoPluginToken:(id)arg1;	// IMP=0x00800000000209ea
+ (struct QRToken)toPluginToken:(id)arg1;	// IMP=0x008000000002083d
+ (id)fromPluginUuid:(struct Uuid)arg1;	// IMP=0x00800000000207d2
+ (struct Uuid)toPluginUuid:(id)arg1;	// IMP=0x0080000000020768
+ (int)fromPluginRewriteType:(int)arg1;	// IMP=0x008000000002075a
+ (int)fromPluginRepetitionType:(int)arg1;	// IMP=0x0080000000020749
+ (id)StdVectorStdString2NSMutableArrayNSString:(vector_74824a0a)arg1;	// IMP=0x00800000000205d3
+ (id)stdString2NSString:(basic_string_6b4a5e99)arg1;	// IMP=0x00800000000205ac
+ (vector_74824a0a)NSMutableArrayNSString2StdVectorStdString:(id)arg1;	// IMP=0x0080000000020205
+ (basic_string_6b4a5e99)NSString2StdString:(id)arg1;	// IMP=0x0080000000020191

@end
