//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _EARResultCombiner : NSObject
{
    struct unique_ptr<quasar::ResultCombiner, std::default_delete<quasar::ResultCombiner>> _combiner;	// 8 = 0x8
}

+ (void)initialize;	// IMP=0x0060000000181a7e
- (id).cxx_construct;	// IMP=0x00000000001846c4
- (void).cxx_destruct;	// IMP=0x00000000001846a3
- (id)combinedResultWithSystemResults:(id)arg1;	// IMP=0x0000000000181be7
- (id)initWithConfiguration:(id)arg1;	// IMP=0x0000000000181aa6

@end

