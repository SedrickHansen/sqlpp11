#pragma once

// generated by ../scripts/ddl2cpp ../test_static_asserts/AssertTables.sql ../test_static_asserts/AssertTables test

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace test
{
  namespace TabAllTypes_
  {
    struct SomeString
    {
      struct _alias_t
      {
        static constexpr const char _literal[] = "some_string";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template <typename T>
        struct _member_t
        {
          T someString;
          T& operator()()
          {
            return someString;
          }
          const T& operator()() const
          {
            return someString;
          }
        };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct SomeInt
    {
      struct _alias_t
      {
        static constexpr const char _literal[] = "some_int";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template <typename T>
        struct _member_t
        {
          T someInt;
          T& operator()()
          {
            return someInt;
          }
          const T& operator()() const
          {
            return someInt;
          }
        };
      };
      using _traits = sqlpp::make_traits<sqlpp::bigint, sqlpp::tag::can_be_null>;
    };
    struct SomeFloat
    {
      struct _alias_t
      {
        static constexpr const char _literal[] = "some_float";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template <typename T>
        struct _member_t
        {
          T someFloat;
          T& operator()()
          {
            return someFloat;
          }
          const T& operator()() const
          {
            return someFloat;
          }
        };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point, sqlpp::tag::can_be_null>;
    };
    struct SomeBool
    {
      struct _alias_t
      {
        static constexpr const char _literal[] = "some_bool";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template <typename T>
        struct _member_t
        {
          T someBool;
          T& operator()()
          {
            return someBool;
          }
          const T& operator()() const
          {
            return someBool;
          }
        };
      };
      using _traits = sqlpp::make_traits<sqlpp::boolean, sqlpp::tag::can_be_null>;
    };
    struct SomeDayPoint
    {
      struct _alias_t
      {
        static constexpr const char _literal[] = "some_day_point";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template <typename T>
        struct _member_t
        {
          T someDayPoint;
          T& operator()()
          {
            return someDayPoint;
          }
          const T& operator()() const
          {
            return someDayPoint;
          }
        };
      };
      using _traits = sqlpp::make_traits<sqlpp::day_point, sqlpp::tag::can_be_null>;
    };
    struct SomeTimePoint
    {
      struct _alias_t
      {
        static constexpr const char _literal[] = "some_time_point";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template <typename T>
        struct _member_t
        {
          T someTimePoint;
          T& operator()()
          {
            return someTimePoint;
          }
          const T& operator()() const
          {
            return someTimePoint;
          }
        };
      };
      using _traits = sqlpp::make_traits<sqlpp::time_point, sqlpp::tag::can_be_null>;
    };
    struct OtherString
    {
      struct _alias_t
      {
        static constexpr const char _literal[] = "other_string";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template <typename T>
        struct _member_t
        {
          T otherString;
          T& operator()()
          {
            return otherString;
          }
          const T& operator()() const
          {
            return otherString;
          }
        };
      };
      using _traits = sqlpp::make_traits<sqlpp::varchar, sqlpp::tag::can_be_null>;
    };
    struct OtherInt
    {
      struct _alias_t
      {
        static constexpr const char _literal[] = "other_int";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template <typename T>
        struct _member_t
        {
          T otherInt;
          T& operator()()
          {
            return otherInt;
          }
          const T& operator()() const
          {
            return otherInt;
          }
        };
      };
      using _traits = sqlpp::make_traits<sqlpp::bigint, sqlpp::tag::can_be_null>;
    };
    struct OtherFloat
    {
      struct _alias_t
      {
        static constexpr const char _literal[] = "other_float";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template <typename T>
        struct _member_t
        {
          T otherFloat;
          T& operator()()
          {
            return otherFloat;
          }
          const T& operator()() const
          {
            return otherFloat;
          }
        };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point, sqlpp::tag::can_be_null>;
    };
    struct OtherBool
    {
      struct _alias_t
      {
        static constexpr const char _literal[] = "other_bool";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template <typename T>
        struct _member_t
        {
          T otherBool;
          T& operator()()
          {
            return otherBool;
          }
          const T& operator()() const
          {
            return otherBool;
          }
        };
      };
      using _traits = sqlpp::make_traits<sqlpp::boolean, sqlpp::tag::can_be_null>;
    };
    struct OtherDayPoint
    {
      struct _alias_t
      {
        static constexpr const char _literal[] = "other_day_point";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template <typename T>
        struct _member_t
        {
          T otherDayPoint;
          T& operator()()
          {
            return otherDayPoint;
          }
          const T& operator()() const
          {
            return otherDayPoint;
          }
        };
      };
      using _traits = sqlpp::make_traits<sqlpp::day_point, sqlpp::tag::can_be_null>;
    };
    struct OtherTimePoint
    {
      struct _alias_t
      {
        static constexpr const char _literal[] = "other_time_point";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template <typename T>
        struct _member_t
        {
          T otherTimePoint;
          T& operator()()
          {
            return otherTimePoint;
          }
          const T& operator()() const
          {
            return otherTimePoint;
          }
        };
      };
      using _traits = sqlpp::make_traits<sqlpp::time_point, sqlpp::tag::can_be_null>;
    };
  }

  struct TabAllTypes : sqlpp::table_t<TabAllTypes,
                                      TabAllTypes_::SomeString,
                                      TabAllTypes_::SomeInt,
                                      TabAllTypes_::SomeFloat,
                                      TabAllTypes_::SomeBool,
                                      TabAllTypes_::SomeDayPoint,
                                      TabAllTypes_::SomeTimePoint,
                                      TabAllTypes_::OtherString,
                                      TabAllTypes_::OtherInt,
                                      TabAllTypes_::OtherFloat,
                                      TabAllTypes_::OtherBool,
                                      TabAllTypes_::OtherDayPoint,
                                      TabAllTypes_::OtherTimePoint>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] = "tab_all_types";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template <typename T>
      struct _member_t
      {
        T tabAllTypes;
        T& operator()()
        {
          return tabAllTypes;
        }
        const T& operator()() const
        {
          return tabAllTypes;
        }
      };
    };
  };
}
