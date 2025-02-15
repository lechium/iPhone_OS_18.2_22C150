//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MPSGraphOperation.h"

@class NSArray, NSData;

__attribute__((visibility("hidden")))
@interface MPSGraphConstantOp : MPSGraphOperation
{
    NSData *_data;	// 80 = 0x50
    _Bool _isSplat;	// 88 = 0x58
    unsigned int _dataType;	// 92 = 0x5c
    NSArray *_shape;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000d709b0
@property(readonly, nonatomic) unsigned int dataType; // @synthesize dataType=_dataType;
@property(readonly, nonatomic) NSArray *shape; // @synthesize shape=_shape;
- (void *)makeMLIROpWithBuilder:(void *)arg1 symbolTable:(void *)arg2 inputValues:(void *)arg3 opInitialization:(_Bool)arg4 name:(id)arg5;	// IMP=0x0000000000d70560
- (id)initWithGraph:(id)arg1 data:(id)arg2 shape:(id)arg3 dataType:(unsigned int)arg4 isSplat:(_Bool)arg5 name:(id)arg6;	// IMP=0x0000000000d70430

@end

