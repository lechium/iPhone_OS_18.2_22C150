//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperation, OTInheritanceKey, OTOperationDependencies;

@interface OTStoreInheritanceKeyOperation
{
    OTInheritanceKey *_ik;	// 16 = 0x10
    OTOperationDependencies *_deps;	// 24 = 0x18
    NSOperation *_finishOp;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000bbada
@property(retain) NSOperation *finishOp; // @synthesize finishOp=_finishOp;
@property(retain) OTOperationDependencies *deps; // @synthesize deps=_deps;
@property(retain) OTInheritanceKey *ik; // @synthesize ik=_ik;
- (void)proceedWithKeys:(id)arg1;	// IMP=0x00100000000bb814
- (void)groupStart;	// IMP=0x00100000000bb632
- (id)initWithIK:(id)arg1 dependencies:(id)arg2;	// IMP=0x00100000000bb590

@end
