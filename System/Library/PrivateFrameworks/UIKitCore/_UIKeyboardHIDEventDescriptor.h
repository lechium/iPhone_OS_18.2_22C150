//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIKeyboardHIDEventDescriptor
{
    long long _usagePage;	// 8 = 0x8
    long long _usage;	// 16 = 0x10
}

+ (id)descriptorWithEvent:(struct __IOHIDEvent *)arg1;	// IMP=0x0060000001a892e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000001a89889
- (void)appendDescriptionToFormatter:(id)arg1;	// IMP=0x0000000001a89756
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;	// IMP=0x0000000001a89744
- (id)descriptionWithMultilinePrefix:(id)arg1;	// IMP=0x0000000001a896f4
- (id)succinctDescriptionBuilder;	// IMP=0x0000000001a8969f
- (id)succinctDescription;	// IMP=0x0000000001a8964f
- (id)description;	// IMP=0x0000000001a89633
- (unsigned long long)hash;	// IMP=0x0000000001a8952c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000001a894c9
- (id)init;	// IMP=0x0000000001a89425

@end

