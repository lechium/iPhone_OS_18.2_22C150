//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface AMSUIWebJSRequest : NSObject
{
    NSString *_logKey;	// 8 = 0x8
    NSDictionary *_options;	// 16 = 0x10
    NSString *_service;	// 24 = 0x18
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000be3f2
- (void).cxx_destruct;	// IMP=0x00000000000be6fa
@property(readonly, nonatomic) NSString *service; // @synthesize service=_service;
@property(retain, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000be4dd
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000be3fa
- (id)initWithServiceName:(id)arg1 logKey:(id)arg2;	// IMP=0x00000000000be338
- (id)init;	// IMP=0x00000000000be309

@end

