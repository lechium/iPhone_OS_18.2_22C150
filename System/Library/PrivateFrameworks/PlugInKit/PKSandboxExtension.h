//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol PKSandboxProvider;

@interface PKSandboxExtension : NSObject
{
    long long _handle;	// 8 = 0x8
    NSString *_token;	// 16 = 0x10
    id <PKSandboxProvider> _provider;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000023740
@property(readonly, nonatomic) id <PKSandboxProvider> provider; // @synthesize provider=_provider;
@property(readonly, nonatomic) NSString *token; // @synthesize token=_token;
@property long long handle; // @synthesize handle=_handle;
- (void)expel;	// IMP=0x0000000000023610
- (void)consume;	// IMP=0x00000000000234e0
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000023420
- (void)dealloc;	// IMP=0x00000000000233e0
- (id)initWithExtension:(id)arg1 provider:(id)arg2;	// IMP=0x0000000000023330

@end
