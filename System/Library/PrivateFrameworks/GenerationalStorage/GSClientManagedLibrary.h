//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GSTemporaryStorage, NSString;
@protocol GSAdditionStoring;

__attribute__((visibility("hidden")))
@interface GSClientManagedLibrary : NSObject
{
    GSTemporaryStorage *_ts;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000011630
- (_Bool)generationsRemove:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000113b6
- (id)initWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x000000000001111f
@property(readonly, nonatomic) NSString *nameSpace;
@property(readonly, nonatomic) NSObject<GSAdditionStoring> *storage;

@end
