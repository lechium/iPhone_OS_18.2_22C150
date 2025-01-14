//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIInputViewSetPlacementDragToDismiss
{
    _Bool _dismissKeyboardOnly;	// 40 = 0x28
    double _offset;	// 48 = 0x30
}

+ (id)placementWithOffset:(double)arg1 dismissKeyboardOnly:(_Bool)arg2;	// IMP=0x0010000000fd2992
+ (_Bool)supportsSecureCoding;	// IMP=0x0010000000fd298a
@property(nonatomic) _Bool dismissKeyboardOnly; // @synthesize dismissKeyboardOnly=_dismissKeyboardOnly;
@property(nonatomic) double offset; // @synthesize offset=_offset;
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000fd2e1d
- (_Bool)isInteractive;	// IMP=0x0000000000fd2e15
- (id)verticalConstraintForInputViewSet:(id)arg1 hostView:(id)arg2 containerView:(id)arg3;	// IMP=0x0000000000fd2af0
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000fd2a72
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000fd29f2
- (Class)applicatorClassForKeyboard:(_Bool)arg1;	// IMP=0x0000000000fd2979

@end

