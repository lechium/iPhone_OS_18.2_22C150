//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKMapItem, NSBlockOperation, NSNumber, NSSet, NSString;

@interface CarSearchItemCellModel : NSObject
{
    NSBlockOperation *_markedAsUpdatedOperation;	// 8 = 0x8
    _Bool _isRecent;	// 16 = 0x10
    _Bool _isShowingStops;	// 17 = 0x11
    NSString *_firstLine;	// 24 = 0x18
    NSString *_secondLine;	// 32 = 0x20
    NSNumber *_rating;	// 40 = 0x28
    NSString *_chargerNumberString;	// 48 = 0x30
    MKMapItem *_mapItem;	// 56 = 0x38
    CDUnknownBlockType _updateBlock;	// 64 = 0x40
    NSSet *_observedKeyPaths;	// 72 = 0x48
    id _observedObject;	// 80 = 0x50
    NSString *_debugSubtitle;	// 88 = 0x58
}

+ (id)modelWithUpdateBlock:(CDUnknownBlockType)arg1;	// IMP=0x00400000005899e2
- (void).cxx_destruct;	// IMP=0x002000000058a2b5
@property(copy, nonatomic) NSString *debugSubtitle; // @synthesize debugSubtitle=_debugSubtitle;
@property(retain, nonatomic) id observedObject; // @synthesize observedObject=_observedObject;
@property(retain, nonatomic) NSSet *observedKeyPaths; // @synthesize observedKeyPaths=_observedKeyPaths;
@property(copy, nonatomic) CDUnknownBlockType updateBlock; // @synthesize updateBlock=_updateBlock;
@property(nonatomic) _Bool isShowingStops; // @synthesize isShowingStops=_isShowingStops;
@property(nonatomic) _Bool isRecent; // @synthesize isRecent=_isRecent;
@property(retain, nonatomic) MKMapItem *mapItem; // @synthesize mapItem=_mapItem;
@property(retain, nonatomic) NSString *chargerNumberString; // @synthesize chargerNumberString=_chargerNumberString;
@property(retain, nonatomic) NSNumber *rating; // @synthesize rating=_rating;
@property(copy, nonatomic) NSString *secondLine; // @synthesize secondLine=_secondLine;
@property(copy, nonatomic) NSString *firstLine; // @synthesize firstLine=_firstLine;
- (id)evChargerLabelText;	// IMP=0x001000000058a0a0
- (_Bool)shouldShowChargerlabel;	// IMP=0x0010000000589fed
- (void)markAsUpdated;	// IMP=0x0010000000589dfa
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x0010000000589d63
- (void)observeObject:(id)arg1 forKeyPaths:(id)arg2;	// IMP=0x0010000000589a6d
- (void)dealloc;	// IMP=0x0010000000589a2b

@end
