//
//     Generated by classdump-c 4.2.0 (64 bit) (iOS port by DreamDevLost, Updated by Kevin Bradley.)(Debug version compiled Dec 27 2024 14:18:54).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CATransform3D {
    double _field1;
    double _field2;
    double _field3;
    double _field4;
    double _field5;
    double _field6;
    double _field7;
    double _field8;
    double _field9;
    double _field10;
    double _field11;
    double _field12;
    double _field13;
    double _field14;
    double _field15;
    double _field16;
};

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct IKCornerRadii {
    double bottomLeft;
    double bottomRight;
    double topLeft;
    double topRight;
};

struct SUUIIndexPathRange {
    long long _field1;
    long long _field2;
    long long _field3;
    long long _field4;
};

struct SUUILockupStyle {
    long long _field1;
    long long _field2;
    unsigned long long _field3;
};

struct SUUIPhysicalCircleConstants {
    double circleDensity;
    double circleLinearDamping;
    double circleMaximumDiameter;
    double circleMinimumDiameter;
    double springMaximumFrequency;
    double springMinimumFrequency;
    double springDamping;
    double translationForceMultiplier;
};

struct SUUIProductLockupLayoutSizing {
    struct CGSize _field1;
    struct CGSize _field2;
    struct CGSize _field3;
    struct CGSize _field4;
    struct CGSize _field5;
};

struct SUUIStackedImageConfiguration {
    struct UIOffset _field1;
    struct CGSize _field2;
    long long _field3;
};

struct UIEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct UIOffset {
    double _field1;
    double _field2;
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

#pragma mark Typedef'd Structures

typedef struct {
    double progress;
    _Bool isBouncingOffTheEdge;
} CDStruct_19149c72;

typedef struct {
    struct UIEdgeInsets contentInset;
    double bottomInsetValueAddedForScrollingTabBar;
} CDStruct_17994511;

