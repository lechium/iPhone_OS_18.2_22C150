//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EAREuclid : NSObject
{
    struct unique_ptr<quasar::QuasarEuclid, std::default_delete<quasar::QuasarEuclid>> _quasarEuclid;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x006000000025ae37
- (id).cxx_construct;	// IMP=0x000000000025be57
- (void).cxx_destruct;	// IMP=0x000000000025be36
- (id)patchVersion;	// IMP=0x000000000025bdb3
- (id)minorVersion;	// IMP=0x000000000025bd30
- (id)majorVersion;	// IMP=0x000000000025bcaf
- (id)fullVersion;	// IMP=0x000000000025bc29
- (id)embeddingDim;	// IMP=0x000000000025bbfb
- (id)maxInputLength;	// IMP=0x000000000025bbcd
- (id)computeEmbeddings:(id)arg1;	// IMP=0x000000000025ba59
- (id)computeEmbedding:(id)arg1;	// IMP=0x000000000025b8c3
- (id)distanceBetweenSource:(id)arg1 target:(id)arg2;	// IMP=0x000000000025b781
- (id)findNearestNeighbors:(id)arg1 numberOfNeighbors:(long long)arg2;	// IMP=0x000000000025b4a9
- (id)initWithConfiguration:(id)arg1 euclidEncoderType:(long long)arg2 initFlag:(long long)arg3 overrides:(id)arg4;	// IMP=0x000000000025ae89
- (id)initWithConfiguration:(id)arg1 euclidEncoderType:(long long)arg2 initFlag:(long long)arg3;	// IMP=0x000000000025ae74
- (id)initWithConfiguration:(id)arg1 euclidEncoderType:(long long)arg2;	// IMP=0x000000000025ae5f

@end

