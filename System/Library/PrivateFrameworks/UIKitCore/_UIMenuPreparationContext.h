//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIResponder;
@protocol UIDeferredMenuElementDelegate;

__attribute__((visibility("hidden")))
@interface _UIMenuPreparationContext : NSObject
{
    _Bool _supportsCustomViewMenuElements;	// 8 = 0x8
    _Bool _useSenderAsResponderSender;	// 9 = 0x9
    _Bool _supportsHeaderView;	// 10 = 0xa
    _Bool _tracksSelection;	// 11 = 0xb
    id _preparer;	// 16 = 0x10
    UIResponder *_firstResponderTarget;	// 24 = 0x18
    id <UIDeferredMenuElementDelegate> _deferredElementDelegate;	// 32 = 0x20
    id _sender;	// 40 = 0x28
    CDUnknownBlockType _shouldTrackVisibleSelection;	// 48 = 0x30
    CDUnknownBlockType _elementSizeSolver;	// 56 = 0x38
}

+ (id)contextWithPreparer:(id)arg1 firstResponderTarget:(id)arg2;	// IMP=0x0010000001b577a3
- (void).cxx_destruct;	// IMP=0x0000000001b57b91
@property(copy, nonatomic) CDUnknownBlockType elementSizeSolver; // @synthesize elementSizeSolver=_elementSizeSolver;
@property(copy, nonatomic) CDUnknownBlockType shouldTrackVisibleSelection; // @synthesize shouldTrackVisibleSelection=_shouldTrackVisibleSelection;
@property(nonatomic) _Bool tracksSelection; // @synthesize tracksSelection=_tracksSelection;
@property(nonatomic) _Bool supportsHeaderView; // @synthesize supportsHeaderView=_supportsHeaderView;
@property(nonatomic) _Bool useSenderAsResponderSender; // @synthesize useSenderAsResponderSender=_useSenderAsResponderSender;
@property(nonatomic) _Bool supportsCustomViewMenuElements; // @synthesize supportsCustomViewMenuElements=_supportsCustomViewMenuElements;
@property(nonatomic) __weak id sender; // @synthesize sender=_sender;
@property(nonatomic) __weak id <UIDeferredMenuElementDelegate> deferredElementDelegate; // @synthesize deferredElementDelegate=_deferredElementDelegate;
@property(readonly, nonatomic) __weak UIResponder *firstResponderTarget; // @synthesize firstResponderTarget=_firstResponderTarget;
@property(readonly, nonatomic) __weak id preparer; // @synthesize preparer=_preparer;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001b578ca
- (_Bool)shouldTrackSelectionForVisibleIndex:(unsigned long long)arg1 elementSize:(long long)arg2;	// IMP=0x0000000001b578a2

@end
