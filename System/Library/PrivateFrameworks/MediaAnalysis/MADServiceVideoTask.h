//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MADVideoRequest;

__attribute__((visibility("hidden")))
@interface MADServiceVideoTask : NSObject
{
    MADVideoRequest *_request;	// 8 = 0x8
}

+ (id)taskForRequest:(id)arg1;	// IMP=0x0060000000019eda
- (void).cxx_destruct;	// IMP=0x0000000000019f08
@property(readonly, nonatomic) MADVideoRequest *request; // @synthesize request=_request;
- (id)finalize;	// IMP=0x0000000000019ef6
- (void)configureVideoProcessor:(id)arg1;	// IMP=0x0000000000019ef0
- (id)initWithRequest:(id)arg1;	// IMP=0x0000000000019ee2

@end

