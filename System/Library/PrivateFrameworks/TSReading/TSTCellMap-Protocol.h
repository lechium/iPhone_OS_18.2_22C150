//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSReading/NSObject-Protocol.h>

@class TSTCell;

@protocol TSTCellMap <NSObject>
@property(nonatomic) _Bool appliesToHidden;
- (void)setMayModifyValuesReferencedByFormulas:(_Bool)arg1;
- (_Bool)mayModifyValuesReferencedByFormulas;
- (_Bool)mayModifyFormulasInCells;
- (TSTCell *)cellAtIndex:(unsigned long long)arg1;
- (CDStruct_bd4d8e6b)cellIDAtIndex:(unsigned long long)arg1;
- (_Bool)containsCellID:(CDStruct_bd4d8e6b)arg1;
- (CDStruct_bd4d8e6b *)cellIDs;
- (void)popLastCell;
- (void)addCell:(TSTCell *)arg1 andCellID:(CDStruct_bd4d8e6b)arg2;
- (unsigned long long)count;
@end

