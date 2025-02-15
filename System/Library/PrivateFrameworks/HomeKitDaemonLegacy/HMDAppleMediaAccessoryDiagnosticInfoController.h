//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol HMDAppleMediaAccessoryDiagnosticInfoControllerDataSource;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessoryDiagnosticInfoController : NSObject
{
    _Bool _isHH2Mode;	// 8 = 0x8
    id <HMDAppleMediaAccessoryDiagnosticInfoControllerDataSource> _dataSource;	// 16 = 0x10
}

+ (id)diagnosticInfoDescriptionWithData:(id)arg1;	// IMP=0x00600000007ecbd4
- (void).cxx_destruct;	// IMP=0x00000000007ecbc6
@property(readonly) __weak id <HMDAppleMediaAccessoryDiagnosticInfoControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) _Bool isHH2Mode; // @synthesize isHH2Mode=_isHH2Mode;
- (id)diagnosticInfoDataWithAdditionalKeys:(id)arg1;	// IMP=0x00000000007ecb55
- (id)_diagnosticInfoWithAdditionalKeys:(id)arg1;	// IMP=0x00000000007ebaf9
- (id)initWithDataSource:(id)arg1 isHH2Mode:(_Bool)arg2;	// IMP=0x00000000007eba8a

@end

