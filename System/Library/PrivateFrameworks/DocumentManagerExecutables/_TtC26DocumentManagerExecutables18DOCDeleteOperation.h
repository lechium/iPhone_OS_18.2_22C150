//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FileProvider/FPDeleteOperation.h>

@class MISSING_TYPE, NSString;

@interface _TtC26DocumentManagerExecutables18DOCDeleteOperation : FPDeleteOperation
{
    MISSING_TYPE *items;	// 8 = 0x8
    MISSING_TYPE *originalOperation;	// 16 = 0x10
    MISSING_TYPE *undoManager;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000051ba0
- (id)initWithItems:(id)arg1;	// IMP=0x0000000000051b40
- (void)registerUndo;	// IMP=0x0000000000051a80
- (id)operationForUndoing;	// IMP=0x00000000000519a0
- (id)operationForRedoing;	// IMP=0x0000000000051920
@property(nonatomic, readonly) NSString *actionNameForUndoing;

@end
